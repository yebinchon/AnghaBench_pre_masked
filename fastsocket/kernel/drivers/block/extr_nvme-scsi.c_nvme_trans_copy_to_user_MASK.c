
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {scalar_t__ iov_base; int iov_len; } ;
struct sg_io_hdr {int iovec_count; scalar_t__ dxferp; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct sg_iovec*,scalar_t__,int) ;
 unsigned long FUNC_1 (scalar_t__,void*,unsigned long) ;
 size_t FUNC_2 (size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct sg_io_hdr *VAR_2, void *VAR_3,
        unsigned long VAR_4)
{
 int VAR_5 = VAR_1;
 unsigned long VAR_6;
 int VAR_7;
 void *VAR_8 = VAR_3;
 size_t VAR_9 = VAR_4;
 size_t VAR_10;

 if (VAR_2->iovec_count > 0) {
  struct sg_iovec VAR_11;

  for (VAR_7 = 0; VAR_7 < VAR_2->iovec_count; VAR_7++) {
   VAR_6 = FUNC_0(&VAR_11, VAR_2->dxferp +
      VAR_7 * sizeof(struct sg_iovec),
      sizeof(struct sg_iovec));
   if (VAR_6)
    return -VAR_0;
   VAR_10 = FUNC_2(VAR_9, VAR_11.iov_len);
   VAR_6 = FUNC_1(VAR_11.iov_base, VAR_8,
        VAR_10);
   if (VAR_6) {
    VAR_5 = -VAR_0;
    break;
   }
   VAR_8 += VAR_10;
   VAR_9 -= VAR_10;
   if (VAR_9 == 0)
    break;
  }
  return VAR_5;
 }
 VAR_6 = FUNC_1(VAR_2->dxferp, VAR_3, VAR_4);
 if (VAR_6)
  VAR_5 = -VAR_0;
 return VAR_5;
}
