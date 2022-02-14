
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {char numlen; char namelen; int name; int number; int min; int hour; int day; int month; } ;
struct TYPE_16__ {int high; int low; } ;
struct TYPE_12__ {char* CallerID; } ;
struct TYPE_13__ {TYPE_1__ CAO; } ;
struct TYPE_14__ {TYPE_2__ CAO_REGS; } ;
struct TYPE_15__ {TYPE_6__ cid; TYPE_3__ m_DAAShadowRegs; scalar_t__ XILINXbase; } ;
typedef int PHONE_CID ;
typedef TYPE_4__ IXJ ;
typedef TYPE_5__ BYTES ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_6__*,int ,int) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static int FUNC_9(IXJ *VAR_5)
{
 int VAR_6;
 BYTES VAR_7;
 char VAR_8[VAR_0];
 bool VAR_9;
 char *VAR_10, *VAR_11;

 if (!FUNC_1(VAR_5))
  return 0;

 VAR_7.high = 0x78;
 VAR_7.low = 0x00;
 FUNC_6(VAR_7.high, VAR_5->XILINXbase + 0x03);
 FUNC_6(VAR_7.low, VAR_5->XILINXbase + 0x02);

 if (!FUNC_0(VAR_5, VAR_2))
  return 0;

 if (!FUNC_2(VAR_5))
  return 0;

 VAR_7.high = FUNC_3(VAR_5->XILINXbase + 0x03);
 VAR_7.low = FUNC_3(VAR_5->XILINXbase + 0x02);
 if (VAR_7.low != VAR_1) {
  if (VAR_4 & 0x0001)
   FUNC_7("DAA Get Version Cannot read DAA ID Byte high = %d low = %d\n", VAR_7.high, VAR_7.low);
  return 0;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6 += 2) {
  VAR_7.high = VAR_7.low = 0x00;
  FUNC_6(VAR_7.high, VAR_5->XILINXbase + 0x03);
  FUNC_6(VAR_7.low, VAR_5->XILINXbase + 0x02);

  if (!FUNC_0(VAR_5, VAR_2))
   return 0;

  if (!FUNC_2(VAR_5))
   return 0;

  VAR_8[VAR_6 + 0] = FUNC_3(VAR_5->XILINXbase + 0x03);
  VAR_8[VAR_6 + 1] = FUNC_3(VAR_5->XILINXbase + 0x02);
 }

 if (!FUNC_0(VAR_5, VAR_3))
  return 0;

 VAR_10 = VAR_8;
 VAR_11 = VAR_5->m_DAAShadowRegs.CAO_REGS.CAO.CallerID;
 VAR_9 = 1;
 while (VAR_9) {
  if ((VAR_10[1] & 0x03) == 0x01) {
   VAR_11[0] = VAR_10[0];
  }
  if ((VAR_10[2] & 0x0c) == 0x04) {
   VAR_11[1] = ((VAR_10[2] & 0x03) << 6) | ((VAR_10[1] & 0xfc) >> 2);
  }
  if ((VAR_10[3] & 0x30) == 0x10) {
   VAR_11[2] = ((VAR_10[3] & 0x0f) << 4) | ((VAR_10[2] & 0xf0) >> 4);
  }
  if ((VAR_10[4] & 0xc0) == 0x40) {
   VAR_11[3] = ((VAR_10[4] & 0x3f) << 2) | ((VAR_10[3] & 0xc0) >> 6);
  } else {
   VAR_9 = 0;
  }
  VAR_10 += 5, VAR_11 += 4;
 }
 FUNC_5(&VAR_5->cid, 0, sizeof(PHONE_CID));
 VAR_11 = VAR_5->m_DAAShadowRegs.CAO_REGS.CAO.CallerID;
 VAR_11 += 4;
 FUNC_8(VAR_5->cid.month, VAR_11, 2);
 VAR_11 += 2;
 FUNC_8(VAR_5->cid.day, VAR_11, 2);
 VAR_11 += 2;
 FUNC_8(VAR_5->cid.hour, VAR_11, 2);
 VAR_11 += 2;
 FUNC_8(VAR_5->cid.min, VAR_11, 2);
 VAR_11 += 3;
 VAR_5->cid.numlen = *VAR_11;
 VAR_11 += 1;
 FUNC_8(VAR_5->cid.number, VAR_11, VAR_5->cid.numlen);
 VAR_11 += VAR_5->cid.numlen + 1;
 VAR_5->cid.namelen = *VAR_11;
 VAR_11 += 1;
 FUNC_8(VAR_5->cid.name, VAR_11, VAR_5->cid.namelen);

 FUNC_4(VAR_5);
 return 1;
}
