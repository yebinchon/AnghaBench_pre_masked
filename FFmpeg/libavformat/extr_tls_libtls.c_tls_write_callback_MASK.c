
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls {int dummy; } ;
typedef int ssize_t ;
typedef int URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct tls *VAR_3, const void *VAR_4, size_t VAR_5, void *VAR_6)
{
    URLContext *VAR_7 = (URLContext*) VAR_6;
    int VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);
    if (VAR_8 == FUNC_0(VAR_1))
        return VAR_2;
    else if (VAR_8 == VAR_0)
        return 0;
    return VAR_8 >= 0 ? VAR_8 : -1;
}
