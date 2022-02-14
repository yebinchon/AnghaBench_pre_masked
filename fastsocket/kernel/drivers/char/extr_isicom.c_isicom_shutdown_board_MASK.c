
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isi_board {int status; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct isi_board *VAR_1)
{
 if (VAR_1->status & VAR_0)
  VAR_1->status &= ~VAR_0;
}
