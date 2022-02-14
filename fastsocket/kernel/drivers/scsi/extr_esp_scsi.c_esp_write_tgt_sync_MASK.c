
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct esp {scalar_t__ prev_soff; scalar_t__ prev_stp; TYPE_1__* target; } ;
struct TYPE_2__ {scalar_t__ esp_offset; scalar_t__ esp_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct esp *VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_2->target[VAR_3].esp_offset;
 u8 VAR_5 = VAR_2->target[VAR_3].esp_period;

 if (VAR_4 != VAR_2->prev_soff) {
  VAR_2->prev_soff = VAR_4;
  FUNC_0(VAR_4, VAR_0);
 }
 if (VAR_5 != VAR_2->prev_stp) {
  VAR_2->prev_stp = VAR_5;
  FUNC_0(VAR_5, VAR_1);
 }
}
