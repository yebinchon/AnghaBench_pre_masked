
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct seq_file*,char*,int,int,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_10, void *VAR_11)
{
 u8 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 VAR_12 =
     (FUNC_1(VAR_9, VAR_7) & VAR_3) >> 4 |
     (FUNC_1(VAR_9, VAR_5) & VAR_0) >> 1;
 VAR_13 =
     (FUNC_1(VAR_9, VAR_7) & VAR_2) >> 3 |
     (FUNC_1(VAR_9, VAR_6) & VAR_1) >> 2;
 VAR_14 = FUNC_1(VAR_8, VAR_4) & 0x0f;
 FUNC_0(VAR_10, "%x %x %x\n", VAR_14, VAR_12, VAR_13);
 return 0;
}
