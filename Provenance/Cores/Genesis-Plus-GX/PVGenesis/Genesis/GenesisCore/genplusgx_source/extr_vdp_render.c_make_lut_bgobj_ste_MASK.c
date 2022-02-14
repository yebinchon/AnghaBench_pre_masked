
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static uint32 FUNC_0(uint32 VAR_0, uint32 VAR_1)
{
  int VAR_2;

  int VAR_3 = (VAR_0 & 0x3F);
  int VAR_4 = (VAR_0 & 0x40);
  int VAR_5 = (VAR_0 & 0x0F);
  int VAR_6 = (VAR_0 & 0x80) >> 1;

  int VAR_7 = (VAR_1 & 0x3F);
  int VAR_8 = (VAR_1 & 0x40);
  int VAR_9 = (VAR_1 & 0x0F);
  int VAR_10 = VAR_8 | VAR_6;

  if(VAR_8)
  {
    if(VAR_9)
    {
      if((VAR_7 & 0x3E) == 0x3E)
      {
        if(VAR_7 & 1)
        {
          VAR_2 = (VAR_3 | 0x00);
        }
        else
        {
          VAR_2 = (VAR_0 & 0x80) ? (VAR_3 | 0x80) : (VAR_3 | 0x40);
        }
      }
      else
      {
        if(VAR_7 == 0x0E || VAR_7 == 0x1E || VAR_7 == 0x2E)
        {
          VAR_2 = (VAR_7 | 0x40);
        }
        else
        {
          VAR_2 = (VAR_7 | VAR_10);
        }
      }
    }
    else
    {
      VAR_2 = (VAR_3 | VAR_6);
    }
  }
  else
  {
    if(VAR_4)
    {
      if(VAR_5)
      {
        VAR_2 = (VAR_3 | VAR_6);
      }
      else
      {
        if(VAR_9)
        {
          if((VAR_7 & 0x3E) == 0x3E)
          {
            if(VAR_7 & 1)
            {
              VAR_2 = (VAR_3 | 0x00);
            }
            else
            {
              VAR_2 = (VAR_0 & 0x80) ? (VAR_3 | 0x80) : (VAR_3 | 0x40);
            }
          }
          else
          {
            if(VAR_7 == 0x0E || VAR_7 == 0x1E || VAR_7 == 0x2E)
            {
              VAR_2 = (VAR_7 | 0x40);
            }
            else
            {
              VAR_2 = (VAR_7 | VAR_10);
            }
          }
        }
        else
        {
          VAR_2 = (VAR_3 | VAR_6);
        }
      }
    }
    else
    {
      if(VAR_9)
      {
        if((VAR_7 & 0x3E) == 0x3E)
        {
          if(VAR_7 & 1)
          {
            VAR_2 = (VAR_3 | 0x00);
          }
          else
          {
            VAR_2 = (VAR_0 & 0x80) ? (VAR_3 | 0x80) : (VAR_3 | 0x40);
          }
        }
        else
        {
          if(VAR_7 == 0x0E || VAR_7 == 0x1E || VAR_7 == 0x2E)
          {
            VAR_2 = (VAR_7 | 0x40);
          }
          else
          {
            VAR_2 = (VAR_7 | VAR_10);
          }
        }
      }
      else
      {
        VAR_2 = (VAR_3 | VAR_6);
      }
    }
  }

  if((VAR_2 & 0x0f) == 0x00) VAR_2 &= 0xC0;

  return (VAR_2);
}
