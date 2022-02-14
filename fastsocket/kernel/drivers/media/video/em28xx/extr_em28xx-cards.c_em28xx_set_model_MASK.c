
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xclk; int i2c_speed; } ;
struct em28xx {size_t model; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct em28xx *VAR_5)
{
 FUNC_0(&VAR_5->board, &VAR_4[VAR_5->model], sizeof(VAR_5->board));




 if (!VAR_5->board.xclk)
  VAR_5->board.xclk = VAR_3 |
      VAR_2;

 if (!VAR_5->board.i2c_speed)
  VAR_5->board.i2c_speed = VAR_0 |
           VAR_1;
}
