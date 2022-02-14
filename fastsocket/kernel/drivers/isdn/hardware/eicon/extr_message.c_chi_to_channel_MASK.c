
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int byte ;



__attribute__((used)) static byte FUNC_0 (byte *VAR_0, dword *VAR_1)
{
  int VAR_2;
  int VAR_3;
  dword VAR_4;
  byte VAR_5;
  byte VAR_6;
  byte VAR_7;

  if (VAR_1) *VAR_1 = 0;
  if(!VAR_0[0]) return 0xff;
  VAR_5 = 0;

  if(VAR_0[1] & 0x20) {
    if(VAR_0[0]==1 && VAR_0[1]==0xac) return 0xfd;
    for(VAR_3=1; VAR_3<VAR_0[0] && !(VAR_0[VAR_3] &0x80); VAR_3++);
    if(VAR_3==VAR_0[0] || !(VAR_0[VAR_3] &0x80)) return 0xfe;
    if((VAR_0[1] |0xc8)!=0xe9) return 0xfe;
    if(VAR_0[1] &0x08) VAR_5 = 0x40;


    if(VAR_0[1] &0x40) {
      VAR_2=VAR_3+1;
      for(VAR_3=VAR_2; VAR_3<VAR_0[0] && !(VAR_0[VAR_3] &0x80); VAR_3++);
      if(VAR_3==VAR_0[0] || !(VAR_0[VAR_3] &0x80)) return 0xfe;
    }


    VAR_2=VAR_3+1;
    for(VAR_3=VAR_2; VAR_3<VAR_0[0] && !(VAR_0[VAR_3] &0x80); VAR_3++);
    if(VAR_3==VAR_0[0] || !(VAR_0[VAR_3] &0x80)) return 0xfe;
    if((VAR_0[VAR_2]|0xd0)!=0xd3) return 0xfe;


    if(VAR_0[VAR_2] &0x10) {


      if((VAR_0[0]-VAR_2)==4) VAR_6 = 0;
      else if((VAR_0[0]-VAR_2)==3) VAR_6 = 1;
      else return 0xfe;
      VAR_7 = 0;
      VAR_4 = 0;
      for(VAR_3=0; VAR_3<4 && VAR_2<VAR_0[0]; VAR_3++) {
        VAR_2++;
        VAR_7 += 8;
        VAR_4 <<= 8;
        if(VAR_0[VAR_2]) {
          for (VAR_7=0; !(VAR_0[VAR_2] & (1 << VAR_7)); VAR_7++);
          VAR_4 |= VAR_0[VAR_2];
        }
      }
      VAR_7 += VAR_6;
      VAR_4 <<= VAR_6;
    }
    else {


      VAR_2=VAR_3+1;
      VAR_7 = VAR_0[VAR_2] &0x3f;
      if(VAR_1) {
        if((byte)(VAR_0[0]-VAR_2)>30) return 0xfe;
        VAR_4 = 0;
        for(VAR_3=VAR_2; VAR_3<=VAR_0[0]; VAR_3++) {
          if ((VAR_0[VAR_3] &0x7f) > 31) return 0xfe;
          VAR_4 |= (1L << (VAR_0[VAR_3] &0x7f));
        }
      }
      else {
        if(VAR_2!=VAR_0[0]) return 0xfe;
        if (VAR_7 > 31) return 0xfe;
        VAR_4 = (1L << VAR_7);
      }
      if(VAR_0[VAR_2] &0x40) return 0xfe;
    }
    if (VAR_1) *VAR_1 = VAR_4;
    else if (VAR_4 != ((dword)(1L << VAR_7))) return 0xfe;
    return (byte)(VAR_5 | VAR_7);
  }
  else {
    for(VAR_3=1; VAR_3<VAR_0[0] && !(VAR_0[VAR_3] &0x80); VAR_3++);
    if(VAR_3!=VAR_0[0] || !(VAR_0[VAR_3] &0x80)) return 0xfe;
    if(VAR_0[1] &0x08) VAR_5 = 0x40;

    switch(VAR_0[1] |0x98) {
    case 0x98: return 0;
    case 0x99:
      if (VAR_1) *VAR_1 = 2;
      return VAR_5 |1;
    case 0x9a:
      if (VAR_1) *VAR_1 = 4;
      return VAR_5 |2;
    case 0x9b: return 0xff;
    case 0x9c: return 0xfd;
    default: return 0xfe;
    }
  }
}
