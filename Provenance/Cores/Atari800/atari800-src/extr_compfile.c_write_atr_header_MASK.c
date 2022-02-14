
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct AFILE_ATR_Header {void* hiseccounthi; void* hiseccountlo; void* seccounthi; void* seccountlo; void* secsizehi; void* secsizelo; int magic2; int magic1; } ;
typedef int header ;
typedef int ULONG ;
typedef void* UBYTE ;
struct TYPE_3__ {int sectorcount; int sectorsize; int fp; } ;
typedef TYPE_1__ ATR_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AFILE_ATR_Header*,int,int ) ;
 int FUNC_1 (struct AFILE_ATR_Header*,int ,int) ;

__attribute__((used)) static int FUNC_2(const ATR_Info *VAR_2)
{
 int VAR_3;
 int VAR_4;
 ULONG VAR_5;
 struct AFILE_ATR_Header VAR_6;
 VAR_3 = VAR_2->sectorcount;
 VAR_4 = VAR_2->sectorsize;
 VAR_5 = (VAR_4 != 256 || VAR_3 <= 3)
  ? (VAR_3 << 3)
  : (VAR_3 << 4) - 0x18;
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.magic1 = VAR_0;
 VAR_6.magic2 = VAR_1;
 VAR_6.secsizelo = (UBYTE) VAR_4;
 VAR_6.secsizehi = (UBYTE) (VAR_4 >> 8);
 VAR_6.seccountlo = (UBYTE) VAR_5;
 VAR_6.seccounthi = (UBYTE) (VAR_5 >> 8);
 VAR_6.hiseccountlo = (UBYTE) (VAR_5 >> 16);
 VAR_6.hiseccounthi = (UBYTE) (VAR_5 >> 24);
 return FUNC_0(&VAR_6, sizeof(VAR_6), VAR_2->fp);
}
