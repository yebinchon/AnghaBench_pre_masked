
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int fw_load_addr; int fw_size; int* fw_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cas*) ;
 int FUNC_1 (struct cas*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cas *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3);


 FUNC_1(VAR_3, VAR_0, 0x0);


 FUNC_1(VAR_3, VAR_2, 0x8ff9);
 FUNC_1(VAR_3, VAR_1, 0xbd);
 FUNC_1(VAR_3, VAR_2, 0x8ffa);
 FUNC_1(VAR_3, VAR_1, 0x82);
 FUNC_1(VAR_3, VAR_2, 0x8ffb);
 FUNC_1(VAR_3, VAR_1, 0x0);
 FUNC_1(VAR_3, VAR_2, 0x8ffc);
 FUNC_1(VAR_3, VAR_1, 0x39);


 FUNC_1(VAR_3, VAR_0, 0x1);
 FUNC_1(VAR_3, VAR_2, VAR_3->fw_load_addr);
 for (VAR_4 = 0; VAR_4 < VAR_3->fw_size; VAR_4++)
  FUNC_1(VAR_3, VAR_1, VAR_3->fw_data[VAR_4]);


 FUNC_1(VAR_3, VAR_2, 0x8ff8);
 FUNC_1(VAR_3, VAR_1, 0x1);
}
