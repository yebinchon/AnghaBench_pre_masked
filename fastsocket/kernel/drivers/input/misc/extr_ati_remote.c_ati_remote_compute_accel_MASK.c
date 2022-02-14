
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ati_remote {unsigned long acc_jiffies; scalar_t__ old_jiffies; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ati_remote *VAR_1)
{
 static const char VAR_2[] = { 1, 2, 4, 6, 9, 13, 20 };
 unsigned long VAR_3 = VAR_0;
 int VAR_4;

 if (FUNC_1(VAR_3, VAR_1->old_jiffies + FUNC_0(250))) {
  VAR_4 = 1;
  VAR_1->acc_jiffies = VAR_3;
 }
 else if (FUNC_2(VAR_3, VAR_1->acc_jiffies + FUNC_0(125)))
  VAR_4 = VAR_2[0];
 else if (FUNC_2(VAR_3, VAR_1->acc_jiffies + FUNC_0(250)))
  VAR_4 = VAR_2[1];
 else if (FUNC_2(VAR_3, VAR_1->acc_jiffies + FUNC_0(500)))
  VAR_4 = VAR_2[2];
 else if (FUNC_2(VAR_3, VAR_1->acc_jiffies + FUNC_0(1000)))
  VAR_4 = VAR_2[3];
 else if (FUNC_2(VAR_3, VAR_1->acc_jiffies + FUNC_0(1500)))
  VAR_4 = VAR_2[4];
 else if (FUNC_2(VAR_3, VAR_1->acc_jiffies + FUNC_0(2000)))
  VAR_4 = VAR_2[5];
 else
  VAR_4 = VAR_2[6];

 return VAR_4;
}
