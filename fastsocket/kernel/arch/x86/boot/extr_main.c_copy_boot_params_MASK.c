
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ cmd_line_ptr; scalar_t__ setup_move_size; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct old_cmdline {
  u16 cl_magic;
  u16 cl_offset;
 };
 const struct old_cmdline * const VAR_4 =
  (const struct old_cmdline *)VAR_0;

 FUNC_0(sizeof VAR_2 != 4096);
 FUNC_2(&VAR_2.hdr, &VAR_3, sizeof VAR_3);

 if (!VAR_2.hdr.cmd_line_ptr &&
     VAR_4->cl_magic == VAR_1) {

  u16 VAR_5;




  if (VAR_4->cl_offset < VAR_2.hdr.setup_move_size)
   VAR_5 = FUNC_1();
  else
   VAR_5 = 0x9000;

  VAR_2.hdr.cmd_line_ptr =
   (VAR_5 << 4) + VAR_4->cl_offset;
 }
}
