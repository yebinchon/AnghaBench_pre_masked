
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlfb_data {int base16; int base16d; char* buf; int bulk_mutex; } ;


 int FUNC_0 (struct dlfb_data*,int) ;
 char* FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dlfb_data *VAR_0)
{

 int VAR_1;
 char *VAR_2;

 FUNC_2(&VAR_0->bulk_mutex);

 VAR_1 = VAR_0->base16;

 VAR_0->base16 = VAR_0->base16d;
 VAR_0->base16d = VAR_1;

 VAR_2 = VAR_0->buf;

 VAR_2 = FUNC_1(VAR_2, 0xFF, 0x00);


 VAR_2 =
     FUNC_1(VAR_2, 0x20, (char)(VAR_0->base16 >> 16));
 VAR_2 = FUNC_1(VAR_2, 0x21, (char)(VAR_0->base16 >> 8));
 VAR_2 = FUNC_1(VAR_2, 0x22, (char)(VAR_0->base16));

 VAR_2 = FUNC_1(VAR_2, 0xFF, 0x00);

 FUNC_0(VAR_0, VAR_2 - VAR_0->buf);

 FUNC_3(&VAR_0->bulk_mutex);
}
