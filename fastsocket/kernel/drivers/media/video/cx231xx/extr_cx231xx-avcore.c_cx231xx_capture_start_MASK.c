
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct pcb_config {int config_num; } ;
struct cx231xx {scalar_t__ mode; int current_pcb_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cx231xx*,int) ;
 int FUNC_1 (struct cx231xx*,scalar_t__) ;
 int FUNC_2 (struct cx231xx*,scalar_t__) ;

int FUNC_3(struct cx231xx *VAR_7, int VAR_8, u8 VAR_9)
{
 int VAR_10 = -1;
 u32 VAR_11 = -1;
 struct pcb_config *VAR_12;


 VAR_12 = (struct pcb_config *)&VAR_7->current_pcb_config;

 if (VAR_12->config_num == 1) {
  switch (VAR_9) {
  case 0:
   VAR_11 = VAR_4;
   break;
  case 1:
   VAR_11 = VAR_3;
   break;
  case 2:
   VAR_11 = VAR_5;
   break;
  case 3:
   VAR_11 = VAR_6;
   break;
  case 4:
  case 6:
   VAR_11 = VAR_1;
   break;
  case 5:
   VAR_11 = VAR_2;
   break;
  }

 } else if (VAR_12->config_num > 1) {
  switch (VAR_9) {
  case 0:
   VAR_11 = VAR_4;
   break;
  case 1:
   VAR_11 = VAR_3;
   break;
  case 2:
   VAR_11 = VAR_5;
   break;
  case 3:
   VAR_11 = VAR_6;
   break;
  case 4:
  case 6:
   VAR_11 = VAR_1;
   break;
  case 5:
   VAR_11 = VAR_2;
   break;
  }

 }

 if (VAR_8) {
  VAR_10 = FUNC_0(VAR_7, VAR_9);

  if (VAR_10 < 0)
   return VAR_10;


  if (VAR_11 > 0)
   VAR_10 = FUNC_1(VAR_7, VAR_11);
 } else {

  if (VAR_11 > 0)
   VAR_10 = FUNC_2(VAR_7, VAR_11);
 }

 if (VAR_7->mode == VAR_0)
  ;
 else
  ;

 return VAR_10;
}
