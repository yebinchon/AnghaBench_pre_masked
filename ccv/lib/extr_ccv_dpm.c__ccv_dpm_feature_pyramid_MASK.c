
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {double rows; double cols; } ;
typedef TYPE_1__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__**,int ,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__**,int ,int,int,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__**,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__**,int ,int) ;
 double FUNC_5 (double,int) ;

__attribute__((used)) static void FUNC_6(ccv_dense_matrix_t* VAR_2, ccv_dense_matrix_t** VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5 + 1;
 double VAR_7 = FUNC_5(2.0, 1.0 / (VAR_5 + 1.0));
 FUNC_4(VAR_3, 0, (VAR_4 + VAR_6 * 2) * sizeof(ccv_dense_matrix_t*));
 VAR_3[VAR_6] = VAR_2;
 int VAR_8;
 for (VAR_8 = 1; VAR_8 <= VAR_5; VAR_8++)
  FUNC_2(VAR_3[VAR_6], &VAR_3[VAR_6 + VAR_8], 0, (int)(VAR_3[VAR_6]->rows / FUNC_5(VAR_7, VAR_8)), (int)(VAR_3[VAR_6]->cols / FUNC_5(VAR_7, VAR_8)), VAR_1);
 for (VAR_8 = VAR_6; VAR_8 < VAR_4 + VAR_6; VAR_8++)
  FUNC_3(VAR_3[VAR_8], &VAR_3[VAR_8 + VAR_6], 0, 0, 0);
 ccv_dense_matrix_t* VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
 {
  VAR_9 = 0;
  FUNC_0(VAR_3[VAR_8 + VAR_6], &VAR_9, 0, 9, VAR_0 / 2 );
  VAR_3[VAR_8] = VAR_9;
 }
 VAR_9 = 0;
 FUNC_0(VAR_3[VAR_6], &VAR_9, 0, 9, VAR_0);
 VAR_3[VAR_6] = VAR_9;
 for (VAR_8 = VAR_6 + 1; VAR_8 < VAR_4 + VAR_6 * 2; VAR_8++)
 {
  VAR_9 = 0;
  FUNC_0(VAR_3[VAR_8], &VAR_9, 0, 9, VAR_0);
  FUNC_1(VAR_3[VAR_8]);
  VAR_3[VAR_8] = VAR_9;
 }
}
