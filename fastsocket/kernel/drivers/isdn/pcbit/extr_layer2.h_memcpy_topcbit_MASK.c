
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcbit_dev {int writeptr; int sh_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int) ;

__attribute__((used)) static __inline__ void FUNC_1(struct pcbit_dev * VAR_1, u_char * VAR_2,
          int VAR_3)
{
  int VAR_4;

  VAR_4 = VAR_3 - (VAR_0 - (VAR_1->writeptr - VAR_1->sh_mem) );

  if (VAR_4 > 0)
    {
      FUNC_0(VAR_1->writeptr, VAR_2, VAR_3 - VAR_4);
      FUNC_0(VAR_1->sh_mem, VAR_2 + (VAR_3 - VAR_4), VAR_4);
      VAR_1->writeptr = VAR_1->sh_mem + VAR_4;
    }
  else
    {
      FUNC_0(VAR_1->writeptr, VAR_2, VAR_3);

      VAR_1->writeptr += VAR_3;
      if (VAR_4 == 0)
 VAR_1->writeptr = VAR_1->sh_mem;
    }
}
