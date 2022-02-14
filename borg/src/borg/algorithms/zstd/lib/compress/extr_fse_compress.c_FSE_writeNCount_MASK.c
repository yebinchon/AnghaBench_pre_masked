
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t FUNC_1 (unsigned int,unsigned int) ;
 size_t FUNC_2 (void*,size_t,short const*,unsigned int,unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;

size_t FUNC_3 (void* VAR_4, size_t VAR_5,
                  const short* VAR_6, unsigned VAR_7, unsigned VAR_8)
{
    if (VAR_8 > VAR_0) return FUNC_0(VAR_3);
    if (VAR_8 < VAR_1) return FUNC_0(VAR_2);

    if (VAR_5 < FUNC_1(VAR_7, VAR_8))
        return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0);

    return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 1 );
}
