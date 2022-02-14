
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucvector ;


 int FUNC_0 (int *,unsigned char const) ;

__attribute__((used)) static unsigned FUNC_1(ucvector* VAR_0, const unsigned char* VAR_1, size_t VAR_2)
{



  size_t VAR_3, VAR_4, VAR_5 = (VAR_2 + 65534) / 65535;
  unsigned VAR_6 = 0;
  for(VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  {
    unsigned VAR_7, VAR_8, VAR_9, VAR_10;
    unsigned char VAR_11;

    VAR_7 = (VAR_3 == VAR_5 - 1);
    VAR_8 = 0;

    VAR_11 = (unsigned char)(VAR_7 + ((VAR_8 & 1) << 1) + ((VAR_8 & 2) << 1));
    FUNC_0(VAR_0, VAR_11);

    VAR_9 = 65535;
    if(VAR_2 - VAR_6 < 65535) VAR_9 = (unsigned)VAR_2 - VAR_6;
    VAR_10 = 65535 - VAR_9;

    FUNC_0(VAR_0, (unsigned char)(VAR_9 % 256));
    FUNC_0(VAR_0, (unsigned char)(VAR_9 / 256));
    FUNC_0(VAR_0, (unsigned char)(VAR_10 % 256));
    FUNC_0(VAR_0, (unsigned char)(VAR_10 / 256));


    for(VAR_4 = 0; VAR_4 < 65535 && VAR_6 < VAR_2; VAR_4++)
    {
      FUNC_0(VAR_0, VAR_1[VAR_6++]);
    }
  }

  return 0;
}
