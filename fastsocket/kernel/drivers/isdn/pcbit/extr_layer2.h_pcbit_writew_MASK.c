
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcbit_dev {int writeptr; int sh_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned short,int) ;

__attribute__((used)) static __inline__ void FUNC_2(struct pcbit_dev *VAR_1, unsigned short VAR_2)
{
  int VAR_3;

  VAR_3 = VAR_0 - (VAR_1->writeptr - VAR_1->sh_mem);
  switch (VAR_3) {
  case 2:
    FUNC_1(VAR_2, VAR_1->writeptr);
    VAR_1->writeptr = VAR_1->sh_mem;
    break;
  case 1:
    FUNC_0((u_char) (VAR_2 & 0x00ffU), VAR_1->writeptr);
    VAR_1->writeptr = VAR_1->sh_mem;
    FUNC_0((u_char) (VAR_2 >> 8), VAR_1->writeptr++);
    break;
  default:
    FUNC_1(VAR_2, VAR_1->writeptr);
    VAR_1->writeptr += 2;
    break;
  };
}
