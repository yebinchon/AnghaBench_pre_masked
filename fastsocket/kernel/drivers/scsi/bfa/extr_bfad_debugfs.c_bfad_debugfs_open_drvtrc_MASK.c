
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct bfad_port_s* i_private; } ;
struct file {struct bfad_debug_info* private_data; } ;
struct bfad_s {scalar_t__ trcmod; } ;
struct bfad_port_s {struct bfad_s* bfad; } ;
struct bfad_debug_info {int buffer_len; void* debug_buffer; } ;
struct bfa_trc_mod_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bfad_debug_info* FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct bfad_port_s *VAR_4 = VAR_2->i_private;
 struct bfad_s *VAR_5 = VAR_4->bfad;
 struct bfad_debug_info *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct bfad_debug_info), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->debug_buffer = (void *) VAR_5->trcmod;
 VAR_6->buffer_len = sizeof(struct bfa_trc_mod_s);

 VAR_3->private_data = VAR_6;

 return 0;
}
