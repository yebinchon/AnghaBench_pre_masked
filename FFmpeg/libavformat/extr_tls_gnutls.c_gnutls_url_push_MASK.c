
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ gnutls_transport_ptr_t ;
typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(gnutls_transport_ptr_t VAR_4,
                               const void *VAR_5, size_t VAR_6)
{
    URLContext *VAR_7 = (URLContext*) VAR_4;
    int VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_6);
    if (VAR_8 >= 0)
        return VAR_8;
    if (VAR_8 == VAR_0)
        return 0;
    if (VAR_8 == FUNC_0(VAR_1))
        VAR_3 = VAR_1;
    else
        VAR_3 = VAR_2;
    return -1;
}
