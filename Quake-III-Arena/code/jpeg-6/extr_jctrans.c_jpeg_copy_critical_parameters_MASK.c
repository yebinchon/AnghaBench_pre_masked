
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int quant_tbl_no; TYPE_4__* quant_table; int v_samp_factor; int h_samp_factor; int component_id; } ;
typedef TYPE_1__ jpeg_component_info ;
typedef TYPE_2__* j_decompress_ptr ;
typedef TYPE_3__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_15__ {scalar_t__* quantval; int sent_table; } ;
struct TYPE_14__ {scalar_t__ global_state; int input_components; int num_components; TYPE_1__* comp_info; TYPE_4__** quant_tbl_ptrs; int CCIR601_sampling; int data_precision; int in_color_space; int image_height; int image_width; } ;
struct TYPE_13__ {int num_components; TYPE_4__** quant_tbl_ptrs; TYPE_1__* comp_info; int CCIR601_sampling; int data_precision; int jpeg_color_space; int image_height; int image_width; } ;
typedef TYPE_4__ JQUANT_TBL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int ) ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__*) ;
 TYPE_4__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;

void
FUNC_7 (j_decompress_ptr VAR_9,
          j_compress_ptr VAR_10)
{
  JQUANT_TBL ** VAR_11;
  jpeg_component_info *VAR_12, *VAR_13;
  JQUANT_TBL *VAR_14, *VAR_15;
  int VAR_16, VAR_17, VAR_18;


  if (VAR_10->global_state != VAR_0)
    FUNC_0(VAR_10, VAR_3, VAR_10->global_state);

  VAR_10->image_width = VAR_9->image_width;
  VAR_10->image_height = VAR_9->image_height;
  VAR_10->input_components = VAR_9->num_components;
  VAR_10->in_color_space = VAR_9->jpeg_color_space;

  FUNC_6(VAR_10);



  FUNC_5(VAR_10, VAR_9->jpeg_color_space);
  VAR_10->data_precision = VAR_9->data_precision;
  VAR_10->CCIR601_sampling = VAR_9->CCIR601_sampling;

  for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
    if (VAR_9->quant_tbl_ptrs[VAR_16] != ((void*)0)) {
      VAR_11 = & VAR_10->quant_tbl_ptrs[VAR_16];
      if (*VAR_11 == ((void*)0))
 *VAR_11 = FUNC_4((j_common_ptr) VAR_10);
      FUNC_2((*VAR_11)->quantval,
       VAR_9->quant_tbl_ptrs[VAR_16]->quantval,
       FUNC_3((*VAR_11)->quantval));
      (*VAR_11)->sent_table = VAR_2;
    }
  }



  VAR_10->num_components = VAR_9->num_components;
  if (VAR_10->num_components < 1 || VAR_10->num_components > VAR_7)
    FUNC_1(VAR_10, VAR_4, VAR_10->num_components,
      VAR_7);
  for (VAR_17 = 0, VAR_12 = VAR_9->comp_info, VAR_13 = VAR_10->comp_info;
       VAR_17 < VAR_10->num_components; VAR_17++, VAR_12++, VAR_13++) {
    VAR_13->component_id = VAR_12->component_id;
    VAR_13->h_samp_factor = VAR_12->h_samp_factor;
    VAR_13->v_samp_factor = VAR_12->v_samp_factor;
    VAR_13->quant_tbl_no = VAR_12->quant_tbl_no;




    VAR_16 = VAR_13->quant_tbl_no;
    if (VAR_16 < 0 || VAR_16 >= VAR_8 ||
 VAR_9->quant_tbl_ptrs[VAR_16] == ((void*)0))
      FUNC_0(VAR_10, VAR_6, VAR_16);
    VAR_15 = VAR_9->quant_tbl_ptrs[VAR_16];
    VAR_14 = VAR_12->quant_table;
    if (VAR_14 != ((void*)0)) {
      for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
 if (VAR_14->quantval[VAR_18] != VAR_15->quantval[VAR_18])
   FUNC_0(VAR_10, VAR_5, VAR_16);
      }
    }



  }
}
