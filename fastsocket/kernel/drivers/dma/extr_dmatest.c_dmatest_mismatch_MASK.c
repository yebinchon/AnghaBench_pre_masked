
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_2__ {char* comm; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (char*,char const*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(u8 VAR_5, u8 VAR_6, unsigned int VAR_7,
  unsigned int VAR_8, bool VAR_9)
{
 u8 VAR_10 = VAR_5 ^ VAR_6;
 u8 VAR_11 = VAR_6 | (~VAR_8 & VAR_1);
 const char *VAR_12 = VAR_4->comm;

 if (VAR_9)
  FUNC_0("%s: srcbuf[0x%x] overwritten!"
    " Expected %02x, got %02x\n",
    VAR_12, VAR_7, VAR_11, VAR_5);
 else if ((VAR_6 & VAR_0)
   && (VAR_10 & (VAR_0 | VAR_2)))
  FUNC_0("%s: dstbuf[0x%x] not copied!"
    " Expected %02x, got %02x\n",
    VAR_12, VAR_7, VAR_11, VAR_5);
 else if (VAR_10 & VAR_3)
  FUNC_0("%s: dstbuf[0x%x] was copied!"
    " Expected %02x, got %02x\n",
    VAR_12, VAR_7, VAR_11, VAR_5);
 else
  FUNC_0("%s: dstbuf[0x%x] mismatch!"
    " Expected %02x, got %02x\n",
    VAR_12, VAR_7, VAR_11, VAR_5);
}
