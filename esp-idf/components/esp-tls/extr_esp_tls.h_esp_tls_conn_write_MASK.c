
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {int (* write ) (TYPE_1__*,char*,size_t) ;} ;
typedef TYPE_1__ esp_tls_t ;


 int FUNC_0 (TYPE_1__*,char*,size_t) ;

__attribute__((used)) static inline ssize_t FUNC_1(esp_tls_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    return VAR_0->write(VAR_0, (char *)VAR_1, VAR_2);
}
