
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_1(const char * VAR_0, int VAR_1,
                  const char * * VAR_2, int * VAR_3,
         const char * * VAR_4, int * VAR_5,
         const char * * VAR_6, int * VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 VAR_10 = 0;
 VAR_8 = VAR_10;
 VAR_9 = 0;
 while(VAR_10<VAR_1)
 {
  switch(VAR_0[VAR_10])
  {
  case ':':
    if(VAR_9==0)
    {
     VAR_9 = VAR_10;





    }
    break;
  case '\x0a':
  case '\x0d':
    if(VAR_9!=0)
    {






     do { VAR_9++; } while(VAR_0[VAR_9]==' ');
     if(0==FUNC_0(VAR_0+VAR_8, "location", 8))
     {
      *VAR_2 = VAR_0+VAR_9;
      *VAR_3 = VAR_10-VAR_9;
     }
     else if(0==FUNC_0(VAR_0+VAR_8, "st", 2))
     {
      *VAR_4 = VAR_0+VAR_9;
      *VAR_5 = VAR_10-VAR_9;
     }
     else if(0==FUNC_0(VAR_0+VAR_8, "usn", 3))
     {
      *VAR_6 = VAR_0+VAR_9;
      *VAR_7 = VAR_10-VAR_9;
     }
     VAR_9 = 0;
    }
    VAR_8 = VAR_10+1;
    break;
  default:
    break;
  }
  VAR_10++;
 }
}
