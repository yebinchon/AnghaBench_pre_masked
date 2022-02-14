
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,int,...) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0,int VAR_1,int VAR_2)
{
  int VAR_3=0,VAR_4=0,VAR_5=0,VAR_6=0;

  if ((VAR_2&0x38)==0x20) VAR_3=1;

  VAR_1&=0xffff; VAR_0[0]=0;

  for (VAR_4=0;VAR_4<17;VAR_4++)
  {
    int VAR_7=0;


    if (VAR_3) VAR_7=0x8000>>VAR_4; else VAR_7=1<<VAR_4;
    VAR_7&=VAR_1;

    if (VAR_7==0 || VAR_4==8)
    {

      char VAR_8[16]="";
      int VAR_9=VAR_5&8?'a':'d';
      if (VAR_5==VAR_4-1) FUNC_0(VAR_8,"%c%d/", VAR_9,VAR_5&7);
      if (VAR_5< VAR_4-1) FUNC_0(VAR_8,"%c%d-%c%d/",VAR_9,VAR_5&7, VAR_9,(VAR_4-1)&7);
      FUNC_1(VAR_0,VAR_8);

      VAR_5=VAR_4;
    }

    if (VAR_7==0) VAR_5=VAR_4+1;
  }


  VAR_6=FUNC_2(VAR_0);
  if (VAR_6>0) if (VAR_0[VAR_6-1]=='/') VAR_0[VAR_6-1]=0;
  return 0;
}
