
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct efx_nic*,int,int ) ;
 int VAR_6 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int) ;

int FUNC_3(struct efx_nic *VAR_7, unsigned int VAR_8)
{
 const int VAR_9 = VAR_3 / VAR_2;
 int VAR_10 = VAR_2;
 int VAR_11 = 0;
 int VAR_12;

 while (VAR_10) {
  int VAR_13 = VAR_8;
  int VAR_14 = 0;
  int VAR_15;
  VAR_12 = 0;
  while (VAR_13) {
   if (VAR_13 & 1) {
    VAR_15 = FUNC_0(VAR_7, VAR_14, VAR_4);
    if (VAR_15 < 0) {
     FUNC_2(VAR_7, VAR_6, VAR_7->net_dev,
        "failed to read status of"
        " MMD %d\n", VAR_14);
     return -VAR_0;
    }
    if (VAR_15 & VAR_5)
     VAR_12 |= (1 << VAR_14);
   }
   VAR_13 = VAR_13 >> 1;
   VAR_14++;
  }
  if (!VAR_12)
   break;
  VAR_10--;
  FUNC_1(VAR_9);
 }
 if (VAR_12 != 0) {
  FUNC_2(VAR_7, VAR_6, VAR_7->net_dev,
     "not all MMDs came out of reset in time."
     " MMDs still in reset: %x\n", VAR_12);
  VAR_11 = -VAR_1;
 }
 return VAR_11;
}
