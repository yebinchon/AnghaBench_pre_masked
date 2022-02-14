
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct _osd_io_info {scalar_t__ bio; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct request* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request* FUNC_1 (struct request_queue*,int ,int) ;
 struct request* FUNC_2 (struct request_queue*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct request *FUNC_4(struct request_queue *VAR_5, bool VAR_6,
         struct _osd_io_info *VAR_7, gfp_t VAR_8)
{
 if (VAR_7->bio)
  return FUNC_2(VAR_5, VAR_7->bio, VAR_8);
 else {
  struct request *VAR_9;

  VAR_9 = FUNC_1(VAR_5, VAR_6 ? VAR_3 : VAR_2, VAR_8);
  if (FUNC_3(!VAR_9))
   return (VAR_8 & VAR_4) ? FUNC_0(-VAR_0) :
            FUNC_0(-VAR_1);

  return VAR_9;
 }
}
