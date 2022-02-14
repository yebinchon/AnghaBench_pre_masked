
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct seq_file*,char*,int ,int ,int ,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_6, void *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_9 = FUNC_5(0);
 VAR_11 = FUNC_2(VAR_1);
 VAR_12 = FUNC_2(VAR_2);
 VAR_13 = FUNC_1(VAR_1);
 VAR_14 = FUNC_1(VAR_2);
 VAR_8 = FUNC_3();
 if (VAR_5)
  VAR_10 = FUNC_4();
 else
  VAR_10 = -1;
 return FUNC_6(VAR_6, "%s %s %s %d %d %d %d %d %d %d\n",
     VAR_3,
     VAR_4,
     FUNC_0(VAR_0),
     VAR_9,
     VAR_11, VAR_12, VAR_13, VAR_14,
     VAR_10, VAR_8);
}
