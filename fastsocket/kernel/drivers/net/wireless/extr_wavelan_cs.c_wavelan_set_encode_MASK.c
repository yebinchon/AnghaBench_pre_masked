
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int flags; } ;
union iwreq_data {TYPE_1__ encoding; } ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int psa_encryption_select; int psa_encryption_key; } ;
typedef TYPE_2__ psa_t ;
struct TYPE_7__ {int spinlock; } ;
typedef TYPE_3__ net_local ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (unsigned int,int ,unsigned char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_7,
         struct iw_request_info *VAR_8,
         union iwreq_data *VAR_9,
         char *VAR_10)
{
 unsigned int VAR_11 = VAR_7->base_addr;
 net_local *VAR_12 = FUNC_5(VAR_7);
 unsigned long VAR_13;
 psa_t VAR_14;
 int VAR_15 = 0;


 FUNC_7(&VAR_12->spinlock, VAR_13);


 if (!FUNC_1(VAR_11)) {
  VAR_15 = -VAR_1;
 }


 if((VAR_9->encoding.length != 8) && (VAR_9->encoding.length != 0)) {
  VAR_15 = -VAR_0;
 }

 if(!VAR_15) {

  if (VAR_9->encoding.length == 8) {

   FUNC_0(VAR_14.psa_encryption_key, VAR_10,
          VAR_9->encoding.length);
   VAR_14.psa_encryption_select = 1;

   FUNC_6(VAR_7,
      (char *) &VAR_14.psa_encryption_select -
      (char *) &VAR_14,
      (unsigned char *) &VAR_14.
      psa_encryption_select, 8 + 1);

   FUNC_2(VAR_11, FUNC_4(0, VAR_5),
    VAR_3 | VAR_4);
   FUNC_3(VAR_11, FUNC_4(0, VAR_6),
      (unsigned char *) &VAR_14.
      psa_encryption_key, 8);
  }


  if (VAR_9->encoding.flags & VAR_2) {
   VAR_14.psa_encryption_select = 0;
   FUNC_6(VAR_7,
      (char *) &VAR_14.psa_encryption_select -
      (char *) &VAR_14,
      (unsigned char *) &VAR_14.
      psa_encryption_select, 1);

   FUNC_2(VAR_11, FUNC_4(0, VAR_5), 0);
  }

  FUNC_9(VAR_7);
 }


 FUNC_8(&VAR_12->spinlock, VAR_13);

 return VAR_15;
}
