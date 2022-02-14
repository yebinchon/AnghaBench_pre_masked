
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hb_stream_t ;
struct TYPE_3__ {scalar_t__ dvd; scalar_t__ bd; } ;
typedef TYPE_1__ hb_scan_t ;
typedef int hb_buffer_t ;


 int * FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_3(hb_scan_t * VAR_0, hb_stream_t * VAR_1)
{
    if (VAR_0->bd)
    {
        return FUNC_0(VAR_0->bd);
    }
    else if (VAR_0->dvd)
    {
        return FUNC_1(VAR_0->dvd);
    }
    else if (VAR_1)
    {
        return FUNC_2(VAR_1);
    }


    return ((void*)0);
}
