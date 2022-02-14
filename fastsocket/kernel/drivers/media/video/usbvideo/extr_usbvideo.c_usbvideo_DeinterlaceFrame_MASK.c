
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int flags; } ;
struct usbvideo_frame {scalar_t__ deinterlace; unsigned char* data; int request; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 (struct uvd*,struct usbvideo_frame*) ;

void FUNC_4(struct uvd *VAR_4, struct usbvideo_frame *VAR_5)
{
 if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
  return;

 if ((VAR_5->deinterlace == VAR_0) ||
     (VAR_5->deinterlace == VAR_1))
 {
  const int VAR_6 = FUNC_0(VAR_5->request) * VAR_3;
  int VAR_7 = (VAR_5->deinterlace == VAR_0) ? 0 : 1;

  for (; VAR_7 < FUNC_1(VAR_5->request); VAR_7 += 2) {
   const unsigned char *VAR_8, *VAR_9;
   unsigned char *VAR_10;
   int VAR_11, VAR_12, VAR_13;






   VAR_11 = VAR_7 - 1;
   VAR_12 = VAR_7 + 1;


   if (VAR_11 < 0)
    VAR_11 = VAR_12;
   if (VAR_12 >= FUNC_1(VAR_5->request))
    VAR_12 = VAR_11;


   if ((VAR_11 < 0) || (VAR_12 < 0) ||
       (VAR_11 >= FUNC_1(VAR_5->request)) ||
       (VAR_12 >= FUNC_1(VAR_5->request)))
   {
    FUNC_2("Error: ip=%d. in=%d. req.height=%ld.",
        VAR_11, VAR_12, FUNC_1(VAR_5->request));
    break;
   }


   VAR_8 = VAR_5->data + (VAR_6 * VAR_11);
   VAR_9 = VAR_5->data + (VAR_6 * VAR_12);
   VAR_10 = VAR_5->data + (VAR_6 * VAR_7);


   for (VAR_13=0; VAR_13 < VAR_6; VAR_13++) {
    VAR_10[VAR_13] = (unsigned char)((((unsigned) VAR_8[VAR_13]) +
        ((unsigned)VAR_9[VAR_13])) >> 1);
   }
  }
 }


 if (VAR_4->flags & VAR_2)
  FUNC_3(VAR_4, VAR_5);
}
