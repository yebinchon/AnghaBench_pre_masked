
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {int key_bytes; int key; } ;
typedef TYPE_1__ esp_aes_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (unsigned int*,int ,int) ;

__attribute__((used)) static inline void FUNC_2( esp_aes_context *VAR_3, int VAR_4)
{
    const uint32_t VAR_5 = 4;
    unsigned VAR_6 = (VAR_4 == VAR_2) ? 0 : VAR_5;

    FUNC_1((uint32_t *)VAR_0, VAR_3->key, VAR_3->key_bytes);
    FUNC_0(VAR_1, VAR_6 + ((VAR_3->key_bytes / 8) - 2));
}
