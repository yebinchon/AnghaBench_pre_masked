
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_page_vec {int length; int data_size; scalar_t__ offset; } ;
struct iser_data_buf {int dma_nents; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct iser_data_buf*,struct ib_device*) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct iser_page_vec*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct iser_data_buf*,struct iser_page_vec*,struct ib_device*) ;

__attribute__((used)) static void FUNC_6(struct iser_data_buf *VAR_1,
    struct iser_page_vec *VAR_2,
    struct ib_device *VAR_3)
{
 int VAR_4 = 0;

 VAR_2->length = 0;
 VAR_2->offset = 0;

 FUNC_2("Translating sg sz: %d\n", VAR_1->dma_nents);
 VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);
 FUNC_2("sg len %d page_vec_len %d\n", VAR_1->dma_nents,VAR_4);

 VAR_2->length = VAR_4;

 if (VAR_4 * VAR_0 < VAR_2->data_size) {
  FUNC_4("page_vec too short to hold this SG\n");
  FUNC_1(VAR_1, VAR_3);
  FUNC_3(VAR_2);
  FUNC_0();
 }
}
