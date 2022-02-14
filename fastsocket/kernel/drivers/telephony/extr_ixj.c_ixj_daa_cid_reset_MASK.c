
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int high; int low; } ;
struct TYPE_7__ {scalar_t__ XILINXbase; } ;
typedef TYPE_1__ IXJ ;
typedef TYPE_2__ BYTES ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(IXJ *VAR_4)
{
 int VAR_5;
 BYTES VAR_6;

 if (VAR_3 & 0x0002)
  FUNC_4("DAA Clearing CID ram\n");

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_6.high = 0x58;
 VAR_6.low = 0x00;
 FUNC_3(VAR_6.high, VAR_4->XILINXbase + 0x03);
 FUNC_3(VAR_6.low, VAR_4->XILINXbase + 0x02);

 if (!FUNC_0(VAR_4, VAR_1))
  return 0;

 if (!FUNC_2(VAR_4))
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0 - 1; VAR_5 += 2) {
  VAR_6.high = VAR_6.low = 0x00;
  FUNC_3(VAR_6.high, VAR_4->XILINXbase + 0x03);

  if (VAR_5 < VAR_0 - 1)
   FUNC_3(VAR_6.low, VAR_4->XILINXbase + 0x02);

  if (!FUNC_0(VAR_4, VAR_1))
   return 0;

  if (!FUNC_2(VAR_4))
   return 0;

 }

 if (!FUNC_0(VAR_4, VAR_2))
  return 0;

 if (VAR_3 & 0x0002)
  FUNC_4("DAA CID ram cleared\n");

 return 1;
}
