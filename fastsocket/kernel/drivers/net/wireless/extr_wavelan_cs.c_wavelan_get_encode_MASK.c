
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
struct TYPE_6__ {int psa_encryption_key; scalar_t__ psa_encryption_select; } ;
typedef TYPE_2__ psa_t ;
struct TYPE_7__ {int spinlock; } ;
typedef TYPE_3__ net_local ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3,
         struct iw_request_info *VAR_4,
         union iwreq_data *VAR_5,
         char *VAR_6)
{
 unsigned int VAR_7 = VAR_3->base_addr;
 net_local *VAR_8 = FUNC_2(VAR_3);
 psa_t VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;


 FUNC_4(&VAR_8->spinlock, VAR_10);


 if (!FUNC_1(VAR_7)) {
  VAR_11 = -VAR_0;
 } else {

  FUNC_3(VAR_3,
    (char *) &VAR_9.psa_encryption_select -
    (char *) &VAR_9,
    (unsigned char *) &VAR_9.
    psa_encryption_select, 1 + 8);


  if (VAR_9.psa_encryption_select)
   VAR_5->encoding.flags = VAR_2;
  else
   VAR_5->encoding.flags = VAR_1;
  VAR_5->encoding.flags |= FUNC_1(VAR_7);


  VAR_5->encoding.length = 8;
  FUNC_0(VAR_6, VAR_9.psa_encryption_key, VAR_5->encoding.length);
 }


 FUNC_5(&VAR_8->spinlock, VAR_10);

 return VAR_11;
}
