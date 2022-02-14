
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe {scalar_t__ lock; int sc; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* locking; } ;
struct TYPE_3__ {scalar_t__ (* lock ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct stripe *VAR_4, int VAR_5, sector_t VAR_6)
{
 VAR_4->lock = FUNC_0(VAR_4->sc)->locking->lock(VAR_6, VAR_5 == VAR_3 ? VAR_1 : VAR_0);
 return VAR_4->lock ? 0 : -VAR_2;
}
