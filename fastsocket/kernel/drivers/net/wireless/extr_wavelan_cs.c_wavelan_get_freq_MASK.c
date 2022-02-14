
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned short m; int e; } ;
union iwreq_data {TYPE_1__ freq; } ;
struct net_device {unsigned int base_addr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int psa_subband; } ;
typedef TYPE_2__ psa_t ;
struct TYPE_7__ {int spinlock; } ;
typedef TYPE_3__ net_local ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int,unsigned short*,int) ;
 unsigned short* VAR_3 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int,unsigned char*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7,
       char *VAR_8)
{
 unsigned int VAR_9 = VAR_5->base_addr;
 net_local *VAR_10 = FUNC_3(VAR_5);
 psa_t VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;


 FUNC_5(&VAR_10->spinlock, VAR_12);



 if (!(FUNC_1(VAR_9, FUNC_2(0, VAR_4)) &
       (VAR_2 | VAR_1))) {
  unsigned short VAR_14;


  FUNC_0(VAR_9, 0x00, &VAR_14, 1);
  VAR_7->freq.m = ((VAR_14 >> 5) * 5 + 24000L) * 10000;
  VAR_7->freq.e = 1;
 } else {
  FUNC_4(VAR_5,
    (char *) &VAR_11.psa_subband - (char *) &VAR_11,
    (unsigned char *) &VAR_11.psa_subband, 1);

  if (VAR_11.psa_subband <= 4) {
   VAR_7->freq.m = VAR_3[VAR_11.psa_subband];
   VAR_7->freq.e = (VAR_11.psa_subband != 0);
  } else
   VAR_13 = -VAR_0;
 }


 FUNC_6(&VAR_10->spinlock, VAR_12);

 return VAR_13;
}
