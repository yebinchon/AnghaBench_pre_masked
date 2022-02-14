
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (long *VAR_1, long *VAR_2)
{
  int VAR_3;
  long VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
  dword VAR_11;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  {
    VAR_6 = VAR_1[VAR_3];
    VAR_7 = VAR_1[VAR_3 + VAR_0];
    VAR_4 = VAR_2[VAR_3] >> 1;
    if (VAR_4 >= 0)
      VAR_4 = ((VAR_4 << 1) * (-VAR_6 >> 16)) + (((dword)(((dword) VAR_4) * ((dword)(-VAR_6 & 0xffff)))) >> 15);
    else
      VAR_4 = ((-VAR_4 << 1) * (-VAR_6 >> 16)) + (((dword)(((dword) -VAR_4) * ((dword)(-VAR_6 & 0xffff)))) >> 15);
    VAR_5 = (VAR_7 >= 0) ? VAR_7 : -VAR_7;
    if (VAR_4 >= 0)
    {
      VAR_11 = ((dword)(VAR_4 & 0xffff)) * ((dword)(VAR_5 & 0xffff));
      VAR_8 = VAR_11 & 0xffff;
      VAR_9 = VAR_11 >> 16;
      VAR_11 = ((dword)(VAR_4 >> 16)) * ((dword)(VAR_5 & 0xffff));
      VAR_9 += VAR_11 & 0xffff;
      VAR_10 = VAR_11 >> 16;
      VAR_11 = ((dword)(VAR_4 & 0xffff)) * ((dword)(VAR_5 >> 16));
      VAR_9 += VAR_11 & 0xffff;
      VAR_10 += VAR_11 >> 16;
      VAR_10 += ((dword)(VAR_4 >> 16)) * ((dword)(VAR_5 >> 16));
    }
    else
    {
      VAR_4 = -VAR_4;
      VAR_11 = ((dword)(VAR_4 & 0xffff)) * ((dword)(VAR_5 & 0xffff));
      VAR_8 = -((long)(VAR_11 & 0xffff));
      VAR_9 = -((long)(VAR_11 >> 16));
      VAR_11 = ((dword)(VAR_4 >> 16)) * ((dword)(VAR_5 & 0xffff));
      VAR_9 -= VAR_11 & 0xffff;
      VAR_10 = -((long)(VAR_11 >> 16));
      VAR_11 = ((dword)(VAR_4 & 0xffff)) * ((dword)(VAR_5 >> 16));
      VAR_9 -= VAR_11 & 0xffff;
      VAR_10 -= VAR_11 >> 16;
      VAR_10 -= ((dword)(VAR_4 >> 16)) * ((dword)(VAR_5 >> 16));
    }
    if (VAR_7 < 0)
    {
      VAR_8 = -VAR_8;
      VAR_9 = -VAR_9;
      VAR_10 = -VAR_10;
    }
    VAR_4 = (VAR_6 >= 0) ? VAR_6 : -VAR_6;
    VAR_11 = ((dword)(VAR_4 & 0xffff)) * ((dword)(VAR_4 & 0xffff));
    VAR_8 += VAR_11 & 0xffff;
    VAR_9 += VAR_11 >> 16;
    VAR_11 = ((dword)(VAR_4 >> 16)) * ((dword)(VAR_4 & 0xffff));
    VAR_9 += (VAR_11 & 0xffff) << 1;
    VAR_10 += (VAR_11 >> 16) << 1;
    VAR_10 += ((dword)(VAR_4 >> 16)) * ((dword)(VAR_4 >> 16));
    VAR_4 = (VAR_7 >= 0) ? VAR_7 : -VAR_7;
    VAR_11 = ((dword)(VAR_4 & 0xffff)) * ((dword)(VAR_4 & 0xffff));
    VAR_8 += VAR_11 & 0xffff;
    VAR_9 += VAR_11 >> 16;
    VAR_11 = ((dword)(VAR_4 >> 16)) * ((dword)(VAR_4 & 0xffff));
    VAR_9 += (VAR_11 & 0xffff) << 1;
    VAR_10 += (VAR_11 >> 16) << 1;
    VAR_10 += ((dword)(VAR_4 >> 16)) * ((dword)(VAR_4 >> 16));
    VAR_9 += VAR_8 >> 16;
    VAR_10 += VAR_9 >> 16;
    VAR_1[VAR_3] = (VAR_8 & 0xffff) | (VAR_9 << 16);
    VAR_1[VAR_3 + VAR_0] = VAR_10;
  }
}
