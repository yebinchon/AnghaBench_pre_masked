
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* max_bin_blocks; void* bin_block_size; void* force_dither_off; void* clif_dump_on_lock; void* reg_dump_on_lock; void* no_bin_render_overlap; void* double_buffer; void* gl_error_assist; } ;
typedef int KHRN_OPTIONS_T ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 void* FUNC_1 (char*,void*) ;
 void* FUNC_2 (char*,void*) ;

void FUNC_3(void)
{

   FUNC_0(&VAR_0, 0, sizeof(KHRN_OPTIONS_T));



   VAR_0.gl_error_assist = FUNC_1( "V3D_GL_ERROR_ASSIST", VAR_0.gl_error_assist);
   VAR_0.double_buffer = FUNC_1( "V3D_DOUBLE_BUFFER", VAR_0.double_buffer);
   VAR_0.no_bin_render_overlap = FUNC_1( "V3D_NO_BIN_RENDER_OVERLAP", VAR_0.no_bin_render_overlap);
   VAR_0.reg_dump_on_lock = FUNC_1( "V3D_REG_DUMP_ON_LOCK", VAR_0.reg_dump_on_lock);
   VAR_0.clif_dump_on_lock = FUNC_1( "V3D_CLIF_DUMP_ON_LOCK", VAR_0.clif_dump_on_lock);
   VAR_0.force_dither_off = FUNC_1( "V3D_FORCE_DITHER_OFF", VAR_0.force_dither_off);

   VAR_0.bin_block_size = FUNC_2("V3D_BIN_BLOCK_SIZE", VAR_0.bin_block_size);
   VAR_0.max_bin_blocks = FUNC_2("V3D_MAX_BIN_BLOCKS", VAR_0.max_bin_blocks);

}
