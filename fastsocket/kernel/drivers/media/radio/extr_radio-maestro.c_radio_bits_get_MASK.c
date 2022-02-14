
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct maestro {int io; int tuned; int stereo; scalar_t__ muted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u32 FUNC_3(struct maestro *VAR_5)
{
 u16 VAR_6 = VAR_5->io, VAR_7, VAR_8;
 u32 VAR_9 = 0;
 u16 VAR_10;

 VAR_10 = FUNC_0(VAR_6 + VAR_0);
 FUNC_1(~(VAR_1 | VAR_4), VAR_6 + VAR_0);
 FUNC_1(0, VAR_6);
 FUNC_2(16);

 for (VAR_7 = 24; VAR_7--;) {
  FUNC_1(VAR_1, VAR_6);
  FUNC_2(2);
  if (!VAR_7)
   VAR_5->tuned = FUNC_0(VAR_6) & VAR_3 ? 0 : 0xffff;
  FUNC_1(0, VAR_6);
  FUNC_2(2);
  VAR_9 <<= 1;
  VAR_8 = FUNC_0(VAR_6);
  if (!VAR_7)
   VAR_5->stereo = (VAR_8 & VAR_3) ? 0 : 1;
  else if (VAR_8 & VAR_2)
   VAR_9++;
  FUNC_2(2);
 }

 if (VAR_5->muted)
  FUNC_1(VAR_4, VAR_6);

 FUNC_2(4);
 FUNC_1(VAR_10, VAR_6 + VAR_0);

 return VAR_9 & 0x3ffe;
}
