
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* bi_end_io ) (TYPE_1__*,int ) ;} ;
struct dm_buffer {TYPE_1__ bio; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1, void *VAR_2)
{
 struct dm_buffer *VAR_3 = VAR_2;

 VAR_3->bio.bi_end_io(&VAR_3->bio, VAR_1 ? -VAR_0 : 0);
}
