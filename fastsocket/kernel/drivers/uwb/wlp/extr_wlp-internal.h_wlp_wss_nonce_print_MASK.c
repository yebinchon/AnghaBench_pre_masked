
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_nonce {int * data; } ;


 size_t FUNC_0 (char*,size_t,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline
size_t FUNC_1(char *VAR_0, size_t VAR_1, struct wlp_nonce *VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1,
     "%02x %02x %02x %02x %02x %02x "
     "%02x %02x %02x %02x %02x %02x "
     "%02x %02x %02x %02x",
     VAR_2->data[0], VAR_2->data[1],
     VAR_2->data[2], VAR_2->data[3],
     VAR_2->data[4], VAR_2->data[5],
     VAR_2->data[6], VAR_2->data[7],
     VAR_2->data[8], VAR_2->data[9],
     VAR_2->data[10], VAR_2->data[11],
     VAR_2->data[12], VAR_2->data[13],
     VAR_2->data[14], VAR_2->data[15]);
 return VAR_3;
}
