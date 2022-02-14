
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef char u32 ;
struct prpmc2800_board_info {char mem_size; scalar_t__ model; char variant; char core_speed; scalar_t__ bridge_type; char user_flash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*,char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (void*,char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 char FUNC_6 (int ) ;
 int FUNC_7 (char) ;
 struct prpmc2800_board_info* FUNC_8 () ;
 int FUNC_9 (void*,char*,char*,int) ;
 char FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int) ;

__attribute__((used)) static void FUNC_12(void)
{
 u32 VAR_5[2], VAR_6, VAR_7;
 int VAR_8;
 void *VAR_9;
 char VAR_10[VAR_1];
 struct prpmc2800_board_info *VAR_11;

 VAR_11 = FUNC_8();

 VAR_7 = (VAR_11) ? VAR_11->mem_size : FUNC_6(VAR_4);
 FUNC_7(VAR_7);




 if (!VAR_11)
  return;



 VAR_9 = FUNC_3("/");
 if (VAR_9 == ((void*)0))
  FUNC_0("Error: Missing '/' device tree node\n\r");
 FUNC_5(VAR_10, 0, VAR_1);
 FUNC_11(VAR_10, VAR_0, VAR_1 - 2);
 VAR_6 = FUNC_10(VAR_10);
 if (VAR_11->model == VAR_2)
  VAR_6--;
 VAR_10[VAR_6++] = VAR_11->variant;
 VAR_10[VAR_6++] = '\0';
 FUNC_9(VAR_9, "model", VAR_10, VAR_6);


 VAR_9 = FUNC_2(((void*)0), "device_type", "cpu");
 if (VAR_9 == ((void*)0))
  FUNC_0("Error: Missing proper cpu device tree node\n\r");
 VAR_5[0] = VAR_11->core_speed;
 FUNC_9(VAR_9, "clock-frequency", &VAR_5[0], sizeof(VAR_5[0]));


 VAR_9 = FUNC_3("/memory");
 if (VAR_9 == ((void*)0))
  FUNC_0("Error: Missing /memory device tree node\n\r");
 VAR_5[0] = 0;
 VAR_5[1] = VAR_11->mem_size;
 FUNC_9(VAR_9, "reg", VAR_5, sizeof(VAR_5));


 if (VAR_11->bridge_type == VAR_3) {
  VAR_9 = FUNC_1(((void*)0), "marvell,mv64360");
  if (VAR_9 == ((void*)0))
   FUNC_0("Error: Missing marvell,mv64360"
     " device tree node\n\r");
  FUNC_9(VAR_9, "model", "mv64362", FUNC_10("mv64362") + 1);
 }


 VAR_9 = FUNC_1(((void*)0), "direct-mapped");
 if (VAR_9 == ((void*)0))
  FUNC_0("Error: Missing User FLASH device tree node\n\r");
 VAR_8 = FUNC_4(VAR_9, "reg", VAR_5, sizeof(VAR_5));
 if (VAR_8 != sizeof(VAR_5))
  FUNC_0("Error: Can't find User FLASH reg property\n\r");
 VAR_5[1] = VAR_11->user_flash;
 FUNC_9(VAR_9, "reg", VAR_5, sizeof(VAR_5));
}
