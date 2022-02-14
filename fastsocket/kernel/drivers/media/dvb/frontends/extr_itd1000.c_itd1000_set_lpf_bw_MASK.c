
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct itd1000_state {int dummy; } ;
struct TYPE_3__ {scalar_t__ symbol_rate; int pgaext; int bbgvmin; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,...) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct itd1000_state*,int ) ;
 int FUNC_3 (struct itd1000_state*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct itd1000_state *VAR_5, u32 VAR_6)
{
 u8 VAR_7;
 u8 VAR_8 = FUNC_2(VAR_5, VAR_2) & 0xfd;
 u8 VAR_9 = FUNC_2(VAR_5, VAR_3) & 0x0f;
 u8 VAR_10 = FUNC_2(VAR_5, VAR_0) & 0xf0;
 u8 VAR_11 = FUNC_2(VAR_5, VAR_1) & 0xf0;

 FUNC_1("symbol_rate = %d", VAR_6);


 FUNC_3(VAR_5, VAR_2, VAR_8 | (1 << 1));

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++)
  if (VAR_6 < VAR_4[VAR_7].symbol_rate) {
   FUNC_1("symrate: index: %d pgaext: %x, bbgvmin: %x", VAR_7, VAR_4[VAR_7].pgaext, VAR_4[VAR_7].bbgvmin);
   FUNC_3(VAR_5, VAR_3, VAR_9 | (VAR_4[VAR_7].pgaext << 4));
   FUNC_3(VAR_5, VAR_0, VAR_10 | (VAR_4[VAR_7].bbgvmin));
   FUNC_3(VAR_5, VAR_1, VAR_11 | (VAR_7 & 0x0f));
   break;
  }

 FUNC_3(VAR_5, VAR_2, VAR_8 | (0 << 1));
}
