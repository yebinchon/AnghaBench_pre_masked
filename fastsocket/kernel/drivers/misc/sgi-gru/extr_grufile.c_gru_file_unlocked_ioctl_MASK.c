
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,char*,struct file*,unsigned int,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 int VAR_1 ;

__attribute__((used)) static long FUNC_11(struct file *VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 int VAR_5 = -VAR_0;

 FUNC_1(VAR_1, "file %p, req 0x%x, 0x%lx\n", VAR_2, VAR_3, VAR_4);

 switch (VAR_3) {
 case 137:
  VAR_5 = FUNC_0(VAR_4);
  break;
 case 132:
  VAR_5 = FUNC_8(VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_4(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_10(VAR_4);
  break;
 case 130:
  VAR_5 = FUNC_9(VAR_4);
  break;
 case 131:
  VAR_5 = FUNC_6(VAR_4);
  break;
 case 134:
  VAR_5 = FUNC_5(VAR_4);
  break;
 case 133:
  VAR_5 = FUNC_7(VAR_4);
  break;
 case 135:
  VAR_5 = FUNC_3(VAR_4);
  break;
 case 136:
  VAR_5 = FUNC_2(VAR_4);
  break;
 }
 return VAR_5;
}
