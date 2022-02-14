
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {long high; long low; } ;
struct TYPE_6__ {long* vol; } ;
struct TYPE_7__ {scalar_t__ XILINXbase; TYPE_1__ mix; } ;
typedef TYPE_2__ IXJ ;
typedef TYPE_3__ BYTES ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(long VAR_2, IXJ *VAR_3)
{
 BYTES VAR_4;

 VAR_4.high = (VAR_2 & 0x1F00) >> 8;
 VAR_4.low = VAR_2 & 0x00FF;


        VAR_3->mix.vol[VAR_4.high] = VAR_4.low;

 FUNC_1(VAR_4.high & 0x1F, VAR_3->XILINXbase + 0x03);

 FUNC_1(VAR_4.low, VAR_3->XILINXbase + 0x02);

 FUNC_0(VAR_3, VAR_0);

 FUNC_0(VAR_3, VAR_1);

 return 0;
}
