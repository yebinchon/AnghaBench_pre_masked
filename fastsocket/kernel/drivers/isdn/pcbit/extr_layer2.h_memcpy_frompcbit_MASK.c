
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcbit_dev {int readptr; int sh_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static __inline__ void FUNC_1(struct pcbit_dev * VAR_2, u_char * VAR_3, int VAR_4)
{
  int VAR_5;

  VAR_5 = VAR_4 - (VAR_1 - (VAR_2->readptr - (VAR_2->sh_mem + VAR_0) ) );
  if (VAR_5 > 0)
    {
      FUNC_0(VAR_3, VAR_2->readptr, VAR_4 - VAR_5);
      FUNC_0(VAR_3 + (VAR_4 - VAR_5), VAR_2->sh_mem + VAR_0 , VAR_5);
      VAR_2->readptr = VAR_2->sh_mem + VAR_0 + VAR_5;
    }
  else
    {
      FUNC_0(VAR_3, VAR_2->readptr, VAR_4);
      VAR_2->readptr += VAR_4;
      if (VAR_5 == 0)
 VAR_2->readptr = VAR_2->sh_mem + VAR_0;
    }
}
