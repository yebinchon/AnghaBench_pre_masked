
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_cnnp_model_t ;
typedef int ccv_cnnp_model_io_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int const,int const,int const,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static ccv_cnnp_model_t* FUNC_5(const int VAR_0, const int VAR_1, const int VAR_2, const int VAR_3)
{
 ccv_cnnp_model_io_t VAR_4 = FUNC_2();
 ccv_cnnp_model_t* VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, 1);
 ccv_cnnp_model_io_t VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_4));
 int VAR_7;
 for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++)
 {
  ccv_cnnp_model_t* VAR_8 = FUNC_1(VAR_0, VAR_1, 1, 0);
  VAR_6 = FUNC_3(VAR_8, FUNC_0(VAR_6));
 }
 return FUNC_4(FUNC_0(VAR_4), FUNC_0(VAR_6), 0);
}
