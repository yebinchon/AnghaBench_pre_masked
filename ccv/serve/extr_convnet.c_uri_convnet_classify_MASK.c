
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int len; int written; char* data; int on_release; } ;
typedef TYPE_3__ ebb_buf ;
struct TYPE_15__ {TYPE_4__* data; int written; } ;
struct TYPE_18__ {scalar_t__ top; TYPE_2__* convnet_and_words; TYPE_1__ source; int param_parser; } ;
typedef TYPE_4__ convnet_param_parser_t ;
typedef int ccv_dense_matrix_t ;
struct TYPE_19__ {int input; } ;
typedef TYPE_5__ ccv_convnet_t ;
struct TYPE_20__ {int id; double confidence; } ;
typedef TYPE_6__ ccv_classification_t ;
struct TYPE_21__ {scalar_t__ rnum; } ;
typedef TYPE_7__ ccv_array_t ;
struct TYPE_16__ {TYPE_7__* words; TYPE_5__* convnet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int) ;
 int FUNC_2 (TYPE_5__*,int **,int,TYPE_7__**,scalar_t__,int) ;
 int FUNC_3 (int ,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,int **,int,int ) ;
 char* VAR_2 ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*,char*,size_t) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int,char*,...) ;
 size_t FUNC_13 (char*,int) ;
 int VAR_3 ;

int FUNC_14(const void* VAR_4, const void* VAR_5, ebb_buf* VAR_6)
{
 if (!VAR_5)
  return -1;
 convnet_param_parser_t* VAR_7 = (convnet_param_parser_t*)VAR_5;
 FUNC_10(&VAR_7->param_parser);
 if (VAR_7->source.data == 0)
 {
  FUNC_6(VAR_7);
  return -1;
 }
 if (VAR_7->convnet_and_words == 0)
 {
  FUNC_6(VAR_7->source.data);
  FUNC_6(VAR_7);
  return -1;
 }
 if (VAR_7->top <= 0 || VAR_7->top > VAR_7->convnet_and_words->words->rnum)
 {
  FUNC_6(VAR_7->source.data);
  FUNC_6(VAR_7);
  return -1;
 }
 ccv_convnet_t* VAR_8 = VAR_7->convnet_and_words->convnet;
 if (VAR_8 == 0)
 {
  FUNC_6(VAR_7->source.data);
  FUNC_6(VAR_7);
  return -1;
 }
 ccv_dense_matrix_t* VAR_9 = 0;
 FUNC_5(VAR_7->source.data, &VAR_9, VAR_0 | VAR_1, VAR_7->source.written);
 FUNC_6(VAR_7->source.data);
 if (VAR_9 == 0)
 {
  FUNC_6(VAR_7);
  return -1;
 }
 ccv_dense_matrix_t* VAR_10 = 0;
 FUNC_3(VAR_8->input, VAR_9, &VAR_10);
 FUNC_4(VAR_9);
 ccv_array_t* VAR_11 = 0;
 FUNC_2(VAR_8, &VAR_10, 1, &VAR_11, VAR_7->top, 1);

 VAR_6->len = 192 + VAR_11->rnum * 30 + 2;
 char* VAR_12 = (char*)FUNC_7(VAR_6->len);
 VAR_12[0] = '[';
 VAR_6->written = 1;
 int VAR_13;
 for (VAR_13 = 0; VAR_13 < VAR_11->rnum; VAR_13++)
 {
  char VAR_14[1024];
  ccv_classification_t* VAR_15 = (ccv_classification_t*)FUNC_1(VAR_11, VAR_13);
  char* VAR_16 = *(char**)FUNC_1(VAR_7->convnet_and_words->words, VAR_15->id);
  FUNC_12(VAR_14, 1024, "{\"word\":\"%s\",\"confidence\":%f}", VAR_16, VAR_15->confidence);
  size_t VAR_17 = FUNC_13(VAR_14, 1024);
  while (VAR_6->written + VAR_17 + 1 >= VAR_6->len)
  {
   VAR_6->len = (VAR_6->len * 3 + 1) / 2;
   VAR_12 = (char*)FUNC_11(VAR_12, VAR_6->len);
  }
  FUNC_8(VAR_12 + VAR_6->written, VAR_14, VAR_17);
  VAR_6->written += VAR_17 + 1;
  VAR_12[VAR_6->written - 1] = (VAR_13 == VAR_11->rnum - 1) ? ']' : ',';
 }

 char VAR_18[192];
 FUNC_12(VAR_18, 192, VAR_2, VAR_6->written + 1);
 size_t VAR_19 = FUNC_13(VAR_18, 192);
 if (VAR_6->written + VAR_19 + 1 >= VAR_6->len)
 {
  VAR_6->len = VAR_6->written + VAR_19 + 1;
  VAR_12 = (char*)FUNC_11(VAR_12, VAR_6->len);
 }
 FUNC_9(VAR_12 + VAR_19, VAR_12, VAR_6->written);
 FUNC_8(VAR_12, VAR_18, VAR_19);
 VAR_6->written += VAR_19 + 1;
 VAR_12[VAR_6->written - 1] = '\n';
 VAR_6->data = VAR_12;
 VAR_6->len = VAR_6->written;
 VAR_6->on_release = VAR_3;
 FUNC_0(VAR_11);
 FUNC_4(VAR_10);
 FUNC_6(VAR_7);
 return 0;
}
