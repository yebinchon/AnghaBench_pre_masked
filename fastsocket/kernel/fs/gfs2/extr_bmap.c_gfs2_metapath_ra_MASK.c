
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {int dummy; } ;
struct buffer_head {int b_end_io; scalar_t__ b_size; scalar_t__ b_data; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int VAR_3 ;
 struct buffer_head* FUNC_3 (struct gfs2_glock*,int ,int ) ;
 int FUNC_4 (int,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(struct gfs2_glock *VAR_4,
        const struct buffer_head *VAR_5, const __be64 *VAR_6)
{
 struct buffer_head *VAR_7;
 const __be64 *VAR_8 = (const __be64 *)(VAR_5->b_data + VAR_5->b_size);
 const __be64 *VAR_9;

 for (VAR_9 = VAR_6; VAR_9 < VAR_8; VAR_9++) {
  if (!*VAR_9)
   continue;

  VAR_7 = FUNC_3(VAR_4, FUNC_0(*VAR_9), VAR_0);
  if (FUNC_5(VAR_7)) {
   if (!FUNC_2(VAR_7)) {
    VAR_7->b_end_io = VAR_3;
    FUNC_4(VAR_1 | VAR_2, VAR_7);
    continue;
   }
   FUNC_6(VAR_7);
  }
  FUNC_1(VAR_7);
 }
}
