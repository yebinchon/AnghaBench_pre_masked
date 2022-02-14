
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tty {int channel_idx; int secondary_channel_idx; int hardware; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct ipw_tty *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_3 & VAR_1) {
  VAR_5 = FUNC_1(VAR_2->hardware, VAR_2->channel_idx, 1);
  if (VAR_5)
   return VAR_5;
  if (VAR_2->secondary_channel_idx != -1) {
   VAR_5 = FUNC_1(VAR_2->hardware,
       VAR_2->secondary_channel_idx, 1);
   if (VAR_5)
    return VAR_5;
  }
 }
 if (VAR_3 & VAR_0) {
  VAR_5 = FUNC_0(VAR_2->hardware, VAR_2->channel_idx, 1);
  if (VAR_5)
   return VAR_5;
  if (VAR_2->secondary_channel_idx != -1) {
   VAR_5 = FUNC_0(VAR_2->hardware,
       VAR_2->secondary_channel_idx, 1);
   if (VAR_5)
    return VAR_5;
  }
 }
 if (VAR_4 & VAR_1) {
  VAR_5 = FUNC_1(VAR_2->hardware, VAR_2->channel_idx, 0);
  if (VAR_2->secondary_channel_idx != -1) {
   VAR_5 = FUNC_1(VAR_2->hardware,
       VAR_2->secondary_channel_idx, 0);
   if (VAR_5)
    return VAR_5;
  }
 }
 if (VAR_4 & VAR_0) {
  VAR_5 = FUNC_0(VAR_2->hardware, VAR_2->channel_idx, 0);
  if (VAR_2->secondary_channel_idx != -1) {
   VAR_5 = FUNC_0(VAR_2->hardware,
       VAR_2->secondary_channel_idx, 0);
   if (VAR_5)
    return VAR_5;
  }
 }
 return 0;
}
