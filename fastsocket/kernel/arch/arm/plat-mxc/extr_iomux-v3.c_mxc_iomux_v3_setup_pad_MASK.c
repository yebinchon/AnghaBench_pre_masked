
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pad_desc {unsigned int pad_ctrl_ofs; int mux_mode; int select_input; int pad_ctrl; scalar_t__ select_input_ofs; scalar_t__ mux_ctrl_ofs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

int FUNC_2(struct pad_desc *VAR_4)
{
 unsigned int VAR_5 = VAR_4->pad_ctrl_ofs;

 if (FUNC_1(VAR_5 >> 2, VAR_3))
  return -VAR_0;
 if (VAR_4->mux_ctrl_ofs)
  FUNC_0(VAR_4->mux_mode, VAR_2 + VAR_4->mux_ctrl_ofs);

 if (VAR_4->select_input_ofs)
  FUNC_0(VAR_4->select_input,
    VAR_2 + VAR_4->select_input_ofs);

 if (!(VAR_4->pad_ctrl & VAR_1) && VAR_4->pad_ctrl_ofs)
  FUNC_0(VAR_4->pad_ctrl, VAR_2 + VAR_4->pad_ctrl_ofs);
 return 0;
}
