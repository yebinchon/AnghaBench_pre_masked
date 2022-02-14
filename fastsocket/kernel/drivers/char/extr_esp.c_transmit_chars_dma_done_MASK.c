
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx; } ;
struct esp_struct {int stat_flags; TYPE_1__ icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (struct esp_struct*,int ,int ) ;

__attribute__((used)) static inline void FUNC_9(struct esp_struct *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 VAR_9 = FUNC_0();
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 VAR_8 = VAR_6 - FUNC_3(VAR_4);
 VAR_7->icount.tx += VAR_6;
 FUNC_7(VAR_9);

 if (VAR_6 != VAR_8) {
  VAR_6 -= VAR_8;
  FUNC_5(VAR_5, VAR_5 + VAR_8, VAR_6);

  FUNC_6(VAR_4, VAR_0,
    FUNC_4(VAR_5), VAR_6);

  FUNC_8(VAR_7, VAR_3, VAR_1);
 } else {
  VAR_6 = 0;
  VAR_7->stat_flags &= ~VAR_2;
 }
}
